type
    Table[Key, Value] = object
        keys: seq[Key]
        values: seq[Value]
        when not (Key is string): # nil value for strings used for optimization
            deletedKeys: seq[bool]
