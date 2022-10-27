#include "crow.h"


int	main()
{
	crow::SimpleApp	app;

	CROW_ROUTE(app, "/")([]()
	{
		return "Hello World";
	});
	app.port(8081).multithreaded().run();
}
