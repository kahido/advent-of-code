set(source_files day_01_1.cpp day_01_2.cpp)

set(input_files input_01)

# Loop through each source file
foreach(source_file IN LISTS source_files)
  # Get the name of the file without the extension
  get_filename_component(target_name ${source_file} NAME_WE)

  # Create an executable with the above name, building the above source
  add_executable(${target_name} "${source_file}")
  target_link_libraries(${target_name} PRIVATE project_options project_warnings)
endforeach()

# Loop through each input file
foreach(input_file IN LISTS input_files)
  file(COPY ${CMAKE_CURRENT_LIST_DIR}/${input_file}_small.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
  file(COPY ${CMAKE_CURRENT_LIST_DIR}/${input_file}_big.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
endforeach()
