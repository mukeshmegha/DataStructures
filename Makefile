.PHONY: clean All

All:
	@echo "----------Building project:[ binaryTrees - Debug ]----------"
	@cd "binaryTrees" && "$(MAKE)" -f  "binaryTrees.mk"
clean:
	@echo "----------Cleaning project:[ binaryTrees - Debug ]----------"
	@cd "binaryTrees" && "$(MAKE)" -f  "binaryTrees.mk" clean
