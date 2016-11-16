DIRS=testing

all: testing

testing: update
	@make -C $(DIRS)

update:
	@git pull

run: update


clean:
	@make clean -C $(DIRS)
