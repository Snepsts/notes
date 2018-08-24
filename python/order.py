list = []

with open("names.txt", "r") as names:
    for line in names:
        list.append(line)

list.sort()

file = open("sorted.txt", "w+")
for item in list:
    file.write("%s\n" % item)
