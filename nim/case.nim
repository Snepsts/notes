echo "Please enter a name: "
let name = readLine(stdin)

case name
of "":
    echo "Poor soul, you lost your name?"
of "name":
    echo "Very funny, your name is name."
of "Michael", "Aaron":
    echo "Cool name!"
else:
    echo "Hi, ", name, "!"
