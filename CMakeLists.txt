cmake_minimum_required(VERSION 3.10)
project(C_Language_Refresh C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

# ================= Basics =================
add_executable(hello_world src/basics/01_hello_world.c)
add_executable(variables src/basics/02_variables.c)
add_executable(control_flow src/basics/03_control_flow.c)
add_executable(funtions src/basics/04_functions.c)
add_executable(arrays src/basics/05_arrays.c)
add_executable(pointers src/basics/06_pointers.c)
add_executable(structs src/basics/07_structs.c)
add_executable(file_io src/basics/08_file_io.c)

# ================= Projects =================
# add_executable(calculator src/projects/calculator/calculator.c)
# add_executable(contacts_manager src/projects/contacts_manager/contacts_manager.c)
# add_executable(grades_analyzer src/projects/grades_analyzer/grades_analyzer.c)
