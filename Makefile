PROGS=testing
CLEAN=$(addsuffix .clean, $(PROGS))

all: update $(PROGS)

update:
	@git pull

$(PROGS): FORCE
	@make -C $@ EXEC=$@

.PHONY: clean $(CLEAN) $(PROGS)

clean: $(CLEAN)

$(CLEAN):
	@echo Cleaning $(basename $@)
	@make clean -C $(basename $@) EXEC=$(basename $@)

FORCE:
