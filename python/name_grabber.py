import os

def name_grabber():
    source_dir = "C:\\Users\\path_to_nupkgs" #hidden from github for security reasons
    dirs = os.listdir(source_dir)

    first_items = []

    with open("names.txt", "r") as first_file:
        for line in first_file:
            first_items.append(line)

    file = open("names.txt", "a")

    items = ""

    for item in dirs:
        if item.find("nupkg") != -1 and item not in first_items:
            items += item + '\n'

    file.write(items)

if __name__ == "__main__":
    name_grabber()
