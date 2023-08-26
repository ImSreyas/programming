import java.awt.*;  
import java.applet.*;  
// <applet code='drawImage' width=500 height=500></applet>
public class drawImage extends Applet {  
    Image picture;  
    public void init() {  
    picture = getImage(getDocumentBase(),"a.png");  
    }  
    public void paint(Graphics g) {  
    g.drawImage(picture, 30,30, this);  
    }   
}