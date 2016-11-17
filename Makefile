PROGS=testing
CLEAN=$(addsuffix .clean, $(PROGS))

all: update $(PROGS)

.PHONY: update clean $(CLEAN) $(PROGS)

$(PROGS): FORCE
	@make -C $@ EXEC=$@

update:
	@: git pull

clean: $(CLEAN)

$(CLEAN):
	@echo Cleaning $(basename $@)
	@make clean -C $(basename $@) EXEC=$(basename $@)

FORCE:
