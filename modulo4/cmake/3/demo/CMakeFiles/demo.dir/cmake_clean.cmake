FILE(REMOVE_RECURSE
  "CMakeFiles/demo.dir/demo.c.o"
  "demo.pdb"
  "demo"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang C)
  INCLUDE(CMakeFiles/demo.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
