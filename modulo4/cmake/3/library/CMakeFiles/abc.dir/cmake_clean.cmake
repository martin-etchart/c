FILE(REMOVE_RECURSE
  "CMakeFiles/abc.dir/a.c.o"
  "CMakeFiles/abc.dir/b.c.o"
  "CMakeFiles/abc.dir/c.c.o"
  "libabc.pdb"
  "libabc.so"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang C)
  INCLUDE(CMakeFiles/abc.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
