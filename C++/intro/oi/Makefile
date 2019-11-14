TARGET           = oi
OBJECT_01        = oi.o
SOURCE_01        = oi.cpp

$(TARGET): $(OBJECT_01)
	gcc -g -o $(TARGET) $(OBJECT_01) -lstdc++

$(OBJECT_01) : $(SOURCE_01)
	gcc -g -c $(SOURCE_01) -o $(OBJECT_01)

all : $(TARGET)

clean :
	-rm $ (TARGET)  $(OBJS)
