#include <iostream>
/*⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡂⢸⠀⢀⣀⣤⣤⣤⣤⣄⡀⢰⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠘⣷⡿⠋⠀⣀⣀⣀⣈⡙⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠙⠁⠔⢻⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⢀⢈⠉⠹⠿⢿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⣰⡁⠀⠀⠹⣿⡎⠀⣀⣹⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⢹⡿⢷⣢⣤⡟⣧⣭⣶⣿⣽⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⢩⠙⠶⣬⡉⠇⣿⣿⣿⣿⡟⡿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠆⠆⠀⡈⠓⠠⣿⣿⣿⠟⣼⢡⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠈⣴⠀⠐⢒⣲⣼⣿⣾⣆⣷⢹⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⡀⢌⠳⢄⠈⢀⣀⣼⣿⣿⣿⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣶⣿⣿⣿⣿⣷⡀⠛⣦⡙⠳⣶⣾⣿⣿⡇⢸⣿⣷⣦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⣿⣿⣿⣿⣿⣿⡿⢿⣷⡄⠀⠙⢦⣤⣿⡟⠁⢱⡘⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣀⣤⣶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⣠⣤⣼⣿⣶⣤⣀⠽⢿⡶⠤⠾⣷⣶⣿⣿⢿⣿⣿⠿⠿⣷⣦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣠⣾⡿⠟⠉⣉⣠⣴⣒⣀⣤⡤⠤⠤⣤⣶⣶⣶⡶⠟⠋⠁⠀⠀⢀⠁⠀⠀⠀⠈⠉⠓⢶⣶⣮⣝⠲⣤⣉⠛⠻⢿⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢀⣼⣿⡿⠖⠚⢉⣡⠴⠞⣉⡡⠴⢖⣫⣭⠶⢛⣿⣿⣤⣀⡀⠀⠀⠀⣸⣷⣿⡀⠀⠀⠀⣀⣼⣿⣿⣟⢿⣶⣿⣍⡓⠶⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢹⣿⣧⣴⠶⣛⡫⠵⣒⣩⡤⠶⠚⠋⠁⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⢻⣿⡿⣯⣑⠒⠾⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⢀⣿⣋⡵⢖⡩⠔⠚⠉⠁⠀⠀⠀⠀⡀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⢿⣿⠀⠈⣿⡇⠈⠻⢿⣝⡲⢿⣿⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⢘⣿⠏⣴⠃⠀⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⠀⠀⠙⠉⠀⠀⠀⠙⠿⠛⠛⢿⣿⣿⣿⠿⠛⠋⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠹⢿⣾⣿⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠸⣯⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠈⠻⣿⡇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢿⣿⣆⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠇⠀⠀⠀⠀⠀⢰⡿⠁⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⣿⠁⠈⠳⣄⠀⠀⠀⠀⠀⢹⣿⣿⣷⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⡀⠀⠀⠀⠀⢠⡿⣧⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⣾⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿⠿⣝⠛⠳⠶⠤⠤⠤⠤⠤⠤⠤⠤⠶⣿⣿⡷⠦⠤⠤⠤⠤⠤⠤⢤⣴⣿⠉⠣⠀⠀⠀⠐⠉⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀
⠀⢠⣿⣿⣿⣦⡀⠀⢀⠀⠀⠀⠀⠀⢸⣏⠳⡀⠑⠀⠀⠀⠀⠀⢀⣀⠀⠀⠀⠀⠈⣿⠀⠀⠀⠀⢀⠀⠀⠀⠀⢻⡟⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀
⠠⠛⠛⠿⣿⠿⣿⣷⣤⣱⣔⣄⠀⠀⣸⣿⣦⡈⠂⠀⠀⢀⣤⣾⠟⠁⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⢳⡄⠀⠀⣸⡇⠀⠀⠀⠀⠀⣠⣴⣾⡾⣿⣶⣦⣤⠀⠀⠀⠀
⠀⠀⠀⠀⠉⢠⠹⣿⣿⣿⣿⣿⣿⣿⠿⠿⣿⣿⣷⠶⠾⠿⣿⣿⠀⠀⠀⠀⠀⠀⢰⣿⣄⣀⣀⠀⠀⠈⣿⣦⣴⣿⣷⡀⠀⠀⢀⣼⣿⣿⡧⠀⠀⠀⠉⠛⠧⠀⠀⠀
⠀⠀⠀⠀⣰⡇⠀⠘⠛⠻⣿⠋⣿⠿⠀⠀⠻⡏⠀⠀⠀⠀⠈⣿⣆⣠⣤⣴⡤⠴⠿⠿⣿⠅⠀⠈⠑⢦⣿⣿⡿⠿⢿⣿⣶⣤⣿⣿⡯⢻⣷⢀⠴⢶⣦⡀⢠⣄⡀⠀
⠐⢶⣆⠀⢸⡇⠀⠤⠶⣾⣮⡁⠃⢀⣧⡀⠀⠠⣤⣀⣀⡀⠀⢿⡿⠟⠛⠏⠀⠀⠀⠀⠙⠀⠀⠀⠀⠛⢻⣿⡇⠀⠀⠈⠟⠻⢿⣿⠁⠀⠙⠃⠀⠘⣿⡿⠿⠛⠛⠒
⠀⠈⠿⠿⣿⠀⠀⠀⠀⠈⠻⣧⣴⡿⠟⠃⠀⣴⡏⠉⠻⢿⣦⠘⠁⠘⣄⠀⠀⠀⣠⡶⠊⢀⣀⣤⣤⣤⣄⣻⣿⡆⠀⠀⠀⣀⡄⠉⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠟⠋⠀⠀⠀⢸⡿⠁⠀⠀⡌⠙⠇⠀⠀⠻⢿⣆⢸⡿⠁⠀⠀⠀⠀⠉⠛⠛⠛⠿⠀⢀⣴⠟⠻⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣇⠀⠀⢀⡇⠀⠀⠀⠀⠀⠀⠉⠻⠀⣀⣤⣶⣤⠄⠀⠀⠀⠀⠀⠀⣿⠟⠀⢸⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠀⠀⣾⣿⡀⣀⣀⣀⡀⠀⠀⠀⠀⠉⠁⢼⣧⣴⣤⡀⠀⠀⠀⠸⠃⠀⠀⠀⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠟⠛⠿⠛⠛⠉⠀⠀⠀⠀⠀⠀⠘⠋⠉⠉⠣⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
-------------------------------------------------------------
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⣤⣶⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣶⣶⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣶⣾⡿⠿⠟⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⠿⢿⣿⣶⣦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣶⣿⠿⠛⠉⠁⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠈⠉⠛⠿⣿⣷⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢀⣠⣾⣿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢀⣴⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢿⣿⣦⡀⠀⠀⠀⠀
⠀⠀⠀⠀⣾⣿⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿⡄⠀⠀⠀
⠀⠀⠀⢸⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣧⠀⠀⠀
⠀⠀⠀⣾⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀
⠀⠀⢀⣿⣿⡿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⡇⠀⠀
⠀⠀⢸⣿⣿⡇⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⣿⣿⡇⠀⠀
⠀⠀⢸⣿⣿⡇⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⣿⣿⣿⠀⠀
⠀⠀⣿⣿⣿⠁⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⣿⣿⣿⠀⠀
⠀⠀⣿⣿⣿⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⠀⣿⣿⣿⡆⠀
⠀⢰⣿⣿⣿⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⢸⣿⣿⡇⠀
⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⠀
⠀⣼⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀
⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀
⠀⣿⣿⣿⡏⠀⠀⣠⣤⣤⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⢀⡀⠀⠀⠀⠀⠀⢀⣀⣠⣤⣤⠀⠀⢸⣿⣿⣿⡇
⢸⣿⣿⣿⣧⠀⢀⣿⣿⣿⣿⣿⣿⣿⣶⣶⣦⣤⣤⣤⣰⣄⣀⣀⣥⣤⢬⣤⣤⣥⢤⠬⣄⣾⣴⣞⣒⣻⣿⣯⣾⣥⣤⣴⣶⣶⣿⣿⣿⣿⣿⣿⣿⡆⠀⢸⣿⣿⣿⡇
⢸⣿⣿⣿⢿⣦⣸⣿⣿⠉⠙⠛⠛⠛⠿⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠿⠟⠛⠛⠛⣿⣿⣇⣠⡿⣿⣿⣿⣇
⣸⣿⣿⡏⠀⠙⢿⣿⣇⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿⠋⠛⠛⠛⠛⠛⠻⠷⠛⠛⠛⠛⠛⠉⣿⣿⣏⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠏⠀⢸⣿⣿⣿
⣿⣿⣿⠃⠀⠀⠈⠻⢿⣿⣷⣦⣤⣤⣤⣤⣤⣤⣶⣶⠿⠿⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠿⠿⣶⣦⣤⣤⣄⣀⣀⣠⣤⣴⣾⡿⠟⠁⠀⠀⠀⣿⣿⣿
⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿
⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿
⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿
⢻⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿
⢸⣿⣿⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⡟
⠘⣿⣿⣿⣿⣷⡀⠀⠀⠀⠢⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡠⠂⠀⠀⠀⣰⣿⣿⣿⣿⡇
⠀⢻⣿⣿⣿⣿⣿⣦⠀⠀⠀⠙⢶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠏⠀⠀⠀⢀⣼⣿⣿⣿⣿⡿⠀
⠀⠀⢿⣿⣿⣿⣿⣿⣷⡄⠀⠀⠀⠻⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠟⠁⠀⠀⠀⣠⣿⣿⣿⣿⣿⣿⠁⠀
⠀⠀⠈⢿⣿⣿⣿⣿⣿⣿⣦⠀⠀⠀⠘⢿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⡿⠋⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⠃⠀⠀
⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣷⡀⠀⠀⠀⠻⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⠟⠁⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀
⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣄⠀⠀⠀⠙⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⠏⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠈⢿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⠃⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢹⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⠀⠈⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⠁⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⢸⣿⣆⣀⣀⣀⣀⣀⣀⣀⣀⢀⣀⣀⣀⣀⣀⣀⢿⣇⠄⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣧⣄⠀⠀⣴⣿⠿⠿⠿⠿⠿⠿⠿⠽⠚⠿⠮⠿⠷⠿⠿⠿⠿⠿⣿⣷⡀⠁⢠⣤⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⡿⠙⠻⣿⣾⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣶⡿⠟⢻⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⡿⠃⠀⠀⠀⠉⠀⠀⠀⢰⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⠀⠀⠀⠈⠋⠀⠀⠈⢿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣿⣷⣤⡀⠀⠀⠀⠀⠀⠀⣼⣇⣀⣀⣀⣰⣶⣶⣶⣶⢦⣀⣀⣀⣰⣿⠀⠀⠀⠀⠀⠀⠀⣠⣶⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⣿⣿⣿⣷⣤⡀⢀⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣷⣦⣀⠀⣀⣴⣿⣿⣿⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣞⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
-----------------------------------------------------------------------
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣶⣦⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣯⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠾⢿⣉⣀⡀⠀⠈⢿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣰⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡟⢹⢿⣿⡷⠄⢿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣾⣿⣿⣿⡥⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣿⣗⠢⣄⣤⣠⣘⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣾⡧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣟⣿⣿⣷⣼⣿⣾⣿⣜⢳⣽⠟⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣷⣶⣾⣺⣶⣧⣦⣄⠀⠀⠀⠀⢯⣿⣿⣿⣿⣿⣿⣿⣿⠏⡿⠃⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢀⣶⣿⣿⣿⣿⣿⣿⣿⣿⣧⣿⣿⣿⣶⣯⣕⣤⣤⢀⡈⠛⠿⠿⢿⣿⣿⣿⢣⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣥⣿⢹⣧⢠⣤⢠⠙⢻⣼⡇⠀⣵⣧⣦⣤⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣠⣴⣿⣿⣿⢿⡿⢿⣞⠷⠻⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣤⣽⣯⠤⠐⠐⢰⠀⠈⠓⢾⢯⣽⣾⣷⣲⣎⠀⠀⠀
⠀⠀⢀⣤⣾⣿⣿⣿⣿⢰⣴⡆⣿⠇⠦⢾⣇⠲⣶⡇⣶⣼⡇⣿⣿⣿⣿⣿⡏⢼⣿⡙⠻⢿⣿⣷⣦⣤⣌⠙⠛⠿⠛⣟⠃⠀⡀
⣠⣴⢿⣿⣿⣿⣿⣿⢠⣿⣿⡆⣿⣨⣭⠽⠻⢓⣼⡷⢸⣿⢸⣿⣿⣿⣿⣇⠻⢿⣿⡿⣿⡢⡙⠿⣿⣿⣭⣬⣂⠄⠀⢸⣭⠢⠁
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣶⣶⣿⣿⣿⣿⣾⣿⣷⣿⣿⣿⣿⣿⣿⣿⢃⢾⣷⡿⣿⢿⣵⣌⠻⢿⣿⣿⣿⣴⠀⠈⠃⠀
⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠉⠉⠉⢉⣿⠟⠉⣉⠘⣿⣿⣿⣿⣿⣿⣿⡖⣸⣿⣿⣿⣯⣿⣿⣶⡘⢿⣿⣿⣿⣿⣦⠀⠀
⠈⢿⣿⠿⠟⠛⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⣸⠋⢠⣾⣿⠀⣹⣿⣿⣿⣿⣿⡿⢰⣿⣿⣿⣷⣿⣿⣿⣿⣿⣶⣬⣭⠙⠛⠀⠀⠄
⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⠇⢠⡾⠀⣸⣿⡿⠀⢰⣿⣿⣿⣿⣿⡿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣿⣧⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⠀⣾⡇⠀⣿⣿⣗⠀⢸⣿⣿⣿⣿⡟⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣷⣶⣻⣿⠊⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⡟⠀⣹⡀⠀⣿⣿⠇⢀⣿⣿⣿⣿⡿⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣭⣛⣛⣻⡿⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⡇⢀⣿⡇⢸⣿⡿⢀⣾⣿⣿⣿⣿⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣳⢯⣟⣭⠱⠃⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⠁⢸⣿⡗⠘⠟⢀⣸⣿⣿⣿⣿⠇⣾⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⡽⠭⠇⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣷⣬⣿⣿⣷⣼⣴⣾⣿⣿⣿⣿⡿⢸⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢃⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠯⠶⠜⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡿⣯⣭⣿⣿⡿⢯⣿⣿⡿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣭⢇⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣍⣳⡀⠀⠀⠀⠀
⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢡⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⢿⣿⣧⠀⠀⠀⠀
⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣾⠆⠀⠀⠀
⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣏⠀⠀⠀
⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⠀⠀⠀
⠀⠀⠉⠛⠛⠿⠿⠿⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣍⣉⣉⣤⣌⣉⣉⣉⠩⠙⠛⠛⠛⠛⣛⣛⣛⣛⣉⣀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠉⠉⠙⠛⢛⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣿⣿⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠁⠄⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢡⣿⣿⣿⣿⣿⣿⣻⣿⣿⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢫⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⣿⣿⣿⣿⣿⣿⣽⣿⣿⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣞⣿⣿⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣯⣿⣿⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣏⣿⣿⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣾⣿⣿⣿⣿⣭⣭⣾⢸⣿⡔⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠾⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⣉⠻⣿⣿⣿⣿⣿⣯⣹⣿⡷⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⢲⣿⣿⣿⣿⠿⢋⠉⠁⠄
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿⣿⣿⣿⣿⡟⡅⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⡼⣗⣷⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣷⡇⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⣾⡀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿⣿⣿⣷⡆⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⢠⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠨⣿⣿⣿⣿⣿⣷⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠐⣿⣿⣿⣿⣿⣾⡀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢸⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⠇
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⠄
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⡟⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣄⣤⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢘⣿⣿⣿⠃⡀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣸⡿⢿⣿⣿⣿⣿⣻⣁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣧⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠤⠶⡟⡙⣽⣿⣿⣿⣿⣿⣭⡩⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡽⢾⡙⣿⡄
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠻⠷⠻⠟⠟⠛⠋⠉⠁⠉⠈⠁⠁⠀⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⠛⣿⡗⣶⣿
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻
-----------------------------------
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡠⣄⣶⡸⣿⣷⣤⣖⣠⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣶⣿⣿⣿⣿⢻⡟⣿⣿⣾⣿⣭⣷⡖⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣽⣻⣽⣿⣿⣿⡿⣿⣾⣷⣿⢧⣛⣽⣶⣥⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⢺⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⣿⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣎⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⠏⠀⠙⠻⠿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⠏⠀⠀⠀⠀⠀⠠⢉⠜⡡⢋⠞⡹⢋⠿⣻⣿⣿⣿⣿⣿⣿⣿⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣏⠂⠀⠀⠀⠀⠀⠀⠂⠐⠀⠁⠂⠀⠁⠂⠡⠈⠙⠛⠿⣿⢿⣿⡌⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢘⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡑⠺⣯⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢰⣠⠓⠀⣀⣤⣤⣤⣄⣀⣀⡀⠀⢀⠀⢀⠀⠀⢀⣀⣀⣠⣤⣀⠃⠟⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠘⡹⡇⠀⣡⣬⣿⣿⣿⣿⣿⣿⡼⣣⣝⣾⣿⣿⣿⣿⣿⣿⣿⣻⠇⣟⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢑⠀⠀⠉⠛⣂⡽⣿⣿⣿⣿⠡⠀⠀⠹⣿⣿⣯⣿⣟⣩⠿⠋⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡜⠀⠀⠀⠀⠈⠉⠁⠂⠁⠀⠀⠀⠀⠀⠈⠁⠈⠉⠛⠉⠀⠀⠀⢇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⡀⠀⠀⠀⠀⠀⠀⠀⡤⠀⠀⠀⠀⠀⠠⡄⠀⠀⠀⠀⠀⠀⠰⢘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠀⠀⠀⠀⠀⠀⠰⣡⣤⣀⡀⣐⣦⣤⡍⠀⠀⠀⠀⠀⠠⡟⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡄⠀⠀⠀⠀⠀⠀⠈⣩⣽⣏⣯⣙⠋⠀⠀⠀⠀⠀⢠⣡⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⡀⠀⠀⢴⣾⣷⣟⢟⣋⡛⢿⣿⣳⣾⣶⣌⠢⡘⣰⢎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠄⠀⣈⠟⠋⠬⠉⡉⢉⠉⣉⠙⡛⢿⢠⣁⣶⡿⠄⠠⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣷⣄⠂⠈⢂⠻⠿⡿⠛⠚⠤⢑⢪⣷⣿⣿⠏⠀⠀⡨⠀⢂⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⢀⣿⣿⡯⠳⣄⣀⠠⡐⣤⢡⣠⣐⣾⣿⣿⣿⠏⠀⠀⠀⡳⠃⠀⠋⢠⠀⠀⠁⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠀⠀⡼⣞⢿⣷⡡⢘⡻⣿⣿⣿⣿⣿⡿⣿⣿⣿⡁⠠⠀⠀⠀⠁⠀⡁⢠⢸⠄⠀⠀⠀⠀⠀⠀⠀⠁
⠀⠀⠀⠀⠀⠀⠀⢀⣨⠤⠀⢸⣹⠣⠼⣿⣷⣣⠜⡭⢯⡝⣚⠶⣹⣷⢿⣁⣧⣌⡁⠀⠀⠑⢀⠀⡀⡽⠂⠀⠀⠈⠀⢀⠂⠀⠀
⠀⠀⠀⠀⠀⠠⠀⠀⠀⠀⠀⠚⠃⣀⠾⡟⣿⡝⢮⡑⠣⠘⡔⢋⣷⡟⣼⣿⣿⣿⣿⡶⠆⠆⡄⠀⠄⠿⠤⠀⠀⠀⡀⠀⠈⡄⠀
⠀⠀⠀⢀⠌⠀⠀⠀⠀⠄⠀⠀⠙⠳⠜⣟⠸⣏⡐⠀⠁⠀⠠⢣⢞⣾⣿⣟⡽⣿⠳⠞⡗⢀⢄⢠⡛⠁⠈⠈⠀⠘⣄⠀⠀⠘⠰
⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⢄⠻⣇⠄⠀⢀⡼⢃⣿⢿⠄⣀⠻⠛⠧⠀⢀⠀⠀⢀⡘⠻⢄⠀⠀⠀⠃⢠⠀⠀⠀
⠀⠀⡈⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠣⣄⠻⣆⣴⣯⠖⠻⠁⠁⠠⠘⠣⠇⡀⠉⠀⠐⠀⡅⣠⠁⠀⠀⠠⠀⠀⡀⢠⠀⠀
⠀⠀⢠⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠬⣃⢿⡗⠁⠁⠀⠀⠈⠀⢄⠂⠀⠀⠀⠘⢣⣠⠰⡀⢉⡐⠊⠄⡀⠀⠀⠀⠀⡀
⠀⢸⢸⠰⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢀⠊⠂⠙⢺⠌⠈⠀⠀⠀⠤⠀⠀⠌⠐⠀⠀⠔⠆⠑⠂⠀⠀⠁⡀⠀⠉⠄⠀⠀⠀⠀
⠀⣄⣸⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠠⠄⠀⠆⠈⠠⠄⠂⠀⠀⠙⠁⠀⠀⠀⠀⠐⠰⠀⠀⠂⠀⢀⠀⠀⠀⠀⠀⠀⠀
⢀⣠⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢂⠀⠀⠄⠀⢠⠄⠀⠀⠀⠀⠀⠀⡀⠀⠀⡀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀
⠀*/
using namespace std;

int main()
{
    int n,i = 0;
    cin>>n;
    int rstr[n];
    while(i<n){
        int s,flag = 0;
        cin>>s;
        int arr[s];
        for(int j = 0; j<s; j++){
           cin>>arr[j];
        }
        for(int k = 1; k<s; k++){
            int diff =abs(arr[k]-arr[k-1]);
            if(diff != 5 && diff != 7){
                flag = 1;
                break;
            }
        }
        rstr[i] = flag;
        i++;
    }
    for (int m = 0; m<n; m++){
        if (rstr[m] == 1){ cout<<"no"<<endl; }
        else { cout<<"yes"<<endl;}
    }
    return 0;
}
