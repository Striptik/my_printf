FOLDER	=	$(HOME)/compat/

CFLAGS	=	-m32
LD	=	ld
LDFLAGS	=	-m --build-id --no-add-needed --eh-frame-hdr -m elf_i386 --hash-style=gnu -dynamic-linker \
		/lib/ld-linux.so.2  \
		$(FOLDER)crt1.o \
		$(FOLDER)crti.o \
		$(FOLDER)crtbegin.o \
		$(FOLDER)crtend.o \
		$(FOLDER)crtn.o \
		$(FOLDER)libc.so \
		$(FOLDER)libc_nonshared.a
