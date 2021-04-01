# Simple comment

include config.mk

all : ${ALL}
	${CC} ${CFLAGS} ${ALL} -o ${OUT}

docs:
	doxygen doxygen-config

install :
	cp -f ${OUT} ${BIN}/

uninstall:
	rm -f ${BIN}/${OUT}

clean:
	rm -f ${ALL} ${OUT}
