import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class JButtonTest{
    JLabel label;
    JFrame frame;
    JButton btn1;
    JButtonTest(){
        label = new JLabel("hello");
        frame = new JFrame("new_frame");
        btn1 = new JButton("click me", new ImageIcon("../../../Pictures/WALLPAPER/2018639.jpg"));
        frame.add(label);
        frame.add(btn1);

        //-frame essentials 
        frame.setSize(400, 400);
        frame.setBackground(Color.red);
        frame.setLayout(new FlowLayout());
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public static void main(String arguments[]){
        new JButtonTest();
    }
}
