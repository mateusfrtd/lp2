projeto_experimental: a.o b.o c.o d.o e.o
	gcc a.o b.o c.o d.o e.o -o projeto_experimental

a.o: a.c projeto_experimental.h a.h b.h funcoes.h
	gcc -c a.c

b.o: b.c projeto_experimental.h a.h b.h funcoes.h
	gcc -c b.c

c.o: c.c projeto_experimental.h c.h e.h
	gcc -c c.c

e.o: e.c projeto_experimental.h c.h e.h funcoes.h
	gcc -c e.c

d.o: d.c projeto_experimental.h d.h
	gcc -c d.c
