#!/bin/bash
# Build the mod using armake2
#
# To run this script with docker, run the following command:
# docker run --rm -it -u 1000:1000 -v $(pwd):/repo --entrypoint=/bin/bash mcoffin/armake2:2e66c92 -c "cd /repo && ./build_mod.sh /repo/._keys/dis.biprivatekey"

if [ -z "$1" ]; then
    echo "Usage: $0 <private key path>"
    exit 1
fi

KEY_PATH="$1"
FILES_TO_ADD=(
    "dis.jpg"
    "disMoto.jpg"
	"dis.paa"
    "mod.cpp"
)

rm -rf @DIS-Factions/
mkdir @DIS-Factions/
mkdir @DIS-Factions/addons/
for todo in "${FILES_TO_ADD[@]}"; do
    cp "$todo" @DIS-Factions/
done

for folder in $(ls -1 addons); do
    if [ -d "./addons/$folder" ]; then
        armake2 build "./addons/$folder" -k "$KEY_PATH" "@DIS-Factions/addons/$folder.pbo"
        # armake2 pack -f "./addons/$folder" "@DIS-Factions/addons/$folder.pbo"
        # armake2 sign "$KEY_PATH" "@DIS-Factions/addons/$folder.pbo"
    fi
done

echo "Mod built successfully: folder dump:"
find @DIS-Factions/ -type f
