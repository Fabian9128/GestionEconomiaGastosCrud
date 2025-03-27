#include "pch.h"
#include "DB.h"

//Metodo Constructor
DB::DB()
{
	this->connectionString = "datasource=localhost; username=root; password=Mariana_9128; database=prueba;";
	this->conn = gcnew MySqlConnection(this->connectionString);
}

//Abrir Conexion
void DB::AbrirConexion()
{
	this->conn->Open();
}
//Cerrar Conexion
void DB::CerrarConexion()
{
	this->conn->Close();
}
//Obtener Datos
DataTable^ DB::getData()
{
	String^ sql = "select * from persona";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();

	data->Fill(tabla);

	return tabla;
}
//Insertar Datos
void DB::Insertar(String^ nombre, String^ edad, String^ carrera)
{
	String^ sql = "insert into persona(Nombre, Edad, Carrera) values ('" + nombre + "', " + edad + ", '" + carrera + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message);
	}
}
//Nodificar Datos
void DB::Modificar(String^ nombre, String^ edad, String^ carrera, String^ referencia)
{
	String^ sql = "update persona set Nombre = '" + nombre + "', Edad = " + edad + ", Carrera = '" + carrera + "' where Nombre = '" + referencia + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message);
	}
}
//Eliminar Datos
void DB::Eliminar(String^ nombre)
{
	String^ sql = "delete from persona where Nombre = '" + nombre + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();

		MessageBox::Show("Eliminado correctamente!");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message);
	}
}
