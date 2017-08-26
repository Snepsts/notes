#!/bin/bash
# This is a simple bash script to display the memory used for my i3statusbar. Credit goes to redowk from bbs.archlinux.org for the awk command.

#i3status | while :
i3status | (read line && echo "$line" && read line && echo "$line" && read line && echo "$line" && while :
do
	read line
	OUTPUT=`awk '/MemTotal/ {memtotal=$2}; /MemAvailable/ {memavail=$2}; END { printf("%.0f", (100- (memavail / memtotal * 100))) }' /proc/meminfo`
	#echo "RAM: $OUTPUT% | $line" || exit 1
	echo ",[{\"full_text\":\"RAM: ${OUTPUT}%\" },${line#,\[}" || exit 1
done)
