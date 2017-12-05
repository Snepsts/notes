# read the first two lines of a text file that
# should contain numbers and tries to add them
var
    f: File
if open(f, "numbers.txt"):
    try:
        var a = readLine(f)
        var b = readLine(f)
        echo "sum: " & $(parseInt(a) + parseInt(b))
    except OverflowError:
        echo "overflow!"
    except ValueError:
        echo "could not convert string to integer"
    except IOError:
        echo "IO error!"
    except:
        echo "Unknown exception!"
    finally:
        close(f)
