cmake_minimum_required(VERSION 3.10)   # versión estable y usada en la industria
project(C_Language_Refresh C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

# ================= Basics =================
add_executable(hello_world src/basics/01_hello_world.c)
# Cuando agregues más:
add_executable(variables src/basics/02_variables.c)
# add_executable(control_flow src/basics/03_control_flow.c)

# ================= Projects =================
# add_executable(calculator src/projects/calculator/calculator.c)
# add_executable(contacts_manager src/projects/contacts_manager/contacts_manager.c)
# add_executable(grades_analyzer src/projects/grades_analyzer/grades_analyzer.c)
