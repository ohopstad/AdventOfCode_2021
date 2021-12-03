# --- Day 1 ---
set(NAME_DAY_1 ${MY_PROJECT_NAME}_day-1)
ADD_EXECUTABLE(${NAME_DAY_1} "")

TARGET_SOURCES(
    ${NAME_DAY_1}
    PRIVATE
    src/day1.cpp
)
