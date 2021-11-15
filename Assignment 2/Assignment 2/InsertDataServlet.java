import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import java.sql.SQLException;
import java.sql.DriverManager;
import java.sql.Connection;
import java.sql.PreparedStatement;

import javax.servlet.RequestDispatcher;

public class InsertDataServlet extends HttpServlet
{
    public void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException
    {
      response.setContentType("text/html");
      PrintWriter out = response.getWriter();
    try
    {    
      int id = Integer.parseInt(request.getParameter("txtbID"));
      String username = request.getParameter("txtbUsername");
      int j2ee = Integer.parseInt(request.getParameter("txtbJ2ee"));
      int bigdata = Integer.parseInt(request.getParameter("txtbBigdata"));
      int ai = Integer.parseInt(request.getParameter("txtbAi"));
      int spm = Integer.parseInt(request.getParameter("txtbSpm"));
      int ligd = Integer.parseInt(request.getParameter("txtbLigd"));
      int cryptography = Integer.parseInt(request.getParameter("txtbCryptography")); 
         
      Class.forName("com.mysql.cj.jdbc.Driver");
      Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/mydatabase1","root","root");
      PreparedStatement st = con.prepareStatement("insert into student_Result values(?, ?, ?, ?, ?, ?, ?, ?);");
      st.setInt(1, id);
      st.setString(2, username);
      st.setInt(3, j2ee);
      st.setInt(4, bigdata);
      st.setInt(5, ai);
      st.setInt(6, spm);
      st.setInt(7, ligd);
      st.setInt(8, cryptography);     
      st.executeUpdate();
      st.close();
      con.close();

      RequestDispatcher rd = request.getRequestDispatcher("insert.jsp");
      out.println("<h3 style=\"color: Green;text-align:center;\">Data Inserted</h3>");
      rd.include(request, response);
    }
    catch(Exception e)
    {
        RequestDispatcher rd = request.getRequestDispatcher("insert.jsp");
        out.println("<h3 style=\"color: Red;text-align:center;\">" +"ERROR OCCURED" + "</h3>");
        out.println("<h3 style=\"color: Red;text-align:center;\">" + e + "</h3>");
        out.println("<h3 style=\"color: Red;text-align:center;\">" + e.getMessage() + "</h3>");
        rd.include(request, response);
    }
  }
}