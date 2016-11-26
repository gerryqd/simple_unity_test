APP_NAME    = simple_test
# Make sure to change this based on your own setting.
UNITY_HOME  = $(shell echo $(HOME))/sw/Unity
PRJ_ROOT    = ..
OBJ_DIR     = ./objs

# unity framework modules are put here
vpath %.c $(UNITY_HOME)/src
SRCS = unity.c

vpath %.c $(UNITY_HOME)/extras/fixture/src
SRCS += unity_fixture.c

# application modules are put here
vpath %.c $(PRJ_ROOT)/src
SRCS += add.c

# test modules are put here
vpath %.c $(PRJ_ROOT)/test
SRCS += add_test.c
SRCS += add_test_runner.c
SRCS += all_tests.c

_OBJS = $(SRCS:.c=.o)
OBJS  = $(patsubst %,$(OBJ_DIR)/%,$(_OBJS))

CFLAGS  = -Wall
CFLAGS += -I$(UNITY_HOME)/src
CFLAGS += -I$(UNITY_HOME)/extras/fixture/src
CFLAGS += -I$(PRJ_ROOT)/src
CFLAGS += -I$(PRJ_ROOT)/test

all: $(APP_NAME)
	./$(APP_NAME)

$(APP_NAME):$(OBJ_DIR) $(OBJS)
	gcc -o $@ $(OBJS)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c
	gcc -c -o $@ $< $(CFLAGS)

clean:
	rm -rf $(APP_NAME) $(OBJ_DIR)
