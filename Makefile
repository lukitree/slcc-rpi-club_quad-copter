all: testing

testing:
	@git pull
	@make -C testing
