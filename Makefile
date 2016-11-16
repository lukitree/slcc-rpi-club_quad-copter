DIRS=testing

all: testing

testing: update
	@make -C $(DIRS)

update:
	@git pull

clean:
	@make clean -C $(DIRS)
