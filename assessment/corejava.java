package assessment;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class corejava {

	public static void main(String[] args) {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
		} catch (ClassNotFoundException e) {
			System.out.println("Mysql not connected");
		}
		
		Connection cn=null;
		try {
			cn=DriverManager.getConnection("jdbc:mysql://localhost/demo","root","");
		} catch (SQLException e) {
			System.out.println("Database not found");
		}
		
		String datainsert="insert into product(product_name,product_price,product_quantity,product_company) value (?,?,?,?)";
		
		try {
			PreparedStatement ps=cn.prepareStatement(datainsert);
			ps.setString(1,"Nexon");
			ps.setInt(2, 75000);
			ps.setInt(3, 1);
			ps.setString(4, "Tata");
			
			int a=ps.executeUpdate();
			if(a>0)
			{
				System.out.println("Data Inserted");
			}
		} catch (SQLException e) {
			System.out.println("Data not inserted");
		}
		
		String dataedit="update product product_name=?,product_price=?,product_quantity=?,product_company=? where product_id=?";
		try {
			PreparedStatement ps=cn.prepareStatement(dataedit);
			ps.setString(1,"Brezza");
			ps.setInt(2, 800000);
			ps.setInt(3, 1);
			ps.setString(4,"Maruti");
			ps.setInt(5, 2);
			int a=ps.executeUpdate();
			if(a>0)
			{
				System.out.println("Data Updated");
			}
		} catch (SQLException e) {
			System.out.println("Data not updated");
			
		}
		
		String datadelete="delete from product wher product_id=2";
		try {
			PreparedStatement ps=cn.prepareStatement(datadelete);
			int a=ps.executeUpdate();
			if(a>0)
			{
				System.out.println("Data Deleted");
			}
		} catch (SQLException e) {
			System.out.println("Data not deleted");
		}
		
		String datafetch="select * from product";
		Statement smt=null;
		
		try {
			smt=cn.createStatement();
		} catch (SQLException e) {
			System.out.println("Smt not working");
		}
		
		ResultSet rs=null;
		try {
			rs=smt.executeQuery(datafetch);
		} catch (SQLException e) {
			System.out.println("Data not found");
		}
		
		try {
			while(rs.next()) {
				System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getInt(3)+" "+rs.getInt(4)+" "+rs.getString(5));
			}
		} catch (SQLException e) {
			System.out.println("Data not fetch");
			
		}
		
		
		
		
		

	}

}
