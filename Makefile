all: testing

testing: update
	@make -C testing

update:
	@git pull

clean:
	@make clean -C testing
