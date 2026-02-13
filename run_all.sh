#!/bin/bash

for file in Exercise*; do
    if [ -f "$file" ] && [ -x "$file" ]; then
        echo "========================================="
        echo "Running: $file"
        echo "========================================="
        ./"$file"
        echo ""
        read -p "Press Enter to continue to next program..."
        echo ""
    fi
done

echo "All programs executed!"
