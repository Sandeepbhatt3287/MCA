import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class ValidateLoginServlet extends HttpServlet
{
    public void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException
    {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        final String USERNAME = "sandeep";
        final String PASSWORD = "12345";

        if(USERNAME.equals(request.getParameter("txtbUsername")) && PASSWORD.equals(request.getParameter("txtbPassword")) )
        {
          response.sendRedirect("insert.jsp");
        }
        else
          response.sendRedirect("index.jsp");
      }
}