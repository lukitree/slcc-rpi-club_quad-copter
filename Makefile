PROGS=testing
CLEAN=$(addsuffix .clean, $(PROGS))

all: update $(PROGS)

update:
	@git pull

$(PROGS): FORCE
	@make -C $@

.PHONY: clean $(CLEAN) $(PROGS)

clean: $(CLEAN)

$(CLEAN):
	@echo Cleaning $(basename $@)
	@make clean -C $(basename $@)

FORCE:
