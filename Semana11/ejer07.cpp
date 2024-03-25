#include <iostream>
#include <sqlite3.h>

int main()
{
    // Abrir la conexión con la base de datos
    sqlite3 *db;
    int rc = sqlite3_open("C:\\Programacion Basica\\Semana11\\proyecto1.db", &db);
    if (rc)
    {
        std::cerr << "Error al abrir la base de datos: " << sqlite3_errmsg(db) << std::endl;
        return 1;
    }

    // Consultar la tabla y mostrar los resultados
    const char *sql_select = "SELECT cantidad, precio FROM usuarios;";
    sqlite3_stmt *stmt;
    rc = sqlite3_prepare_v2(db, sql_select, -1, &stmt, nullptr);
    if (rc != SQLITE_OK)
    {
        std::cerr << "Error al preparar la consulta: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return 1;
    }

    std::cout << "Cantidad y Precio de los Usuarios:" << std::endl;
    while (sqlite3_step(stmt) == SQLITE_ROW)
    {
        int cantidad = sqlite3_column_int(stmt, 0);
        double precio = sqlite3_column_double(stmt, 1);
        std::cout << "Cantidad: " << cantidad << ", Precio: " << precio << std::endl;
    }

    // Finalizar
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return 0;
}
