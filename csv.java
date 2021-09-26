/**
 * 
 */
package csv;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;
import java.util.List;

public class csv {
	/**
	 * author:zhangye
	 * 
	 * @throws IOException
	 * 
	 * 
	 */

	public static void main(String[] args) throws IOException {
		File file = new File("\\\\Furama\\マイ　プロジェクト\\新人教育\\資料\\Java\\1.csv");
		FileReader fr = new FileReader(file);
		BufferedReader br = new BufferedReader(fr);
        br.mark(300);
		// 循环读取所有行并输出
		String line = br.readLine();
//		while (line != null) {
//			System.out.println(line);
//			line = br.readLine();
//		}

		List<String> list1 = new ArrayList<String>();
		for (int i = 0; i < 6; i++) {
			list1.add(line);
			line = br.readLine();
		}
		System.out.println(list1);
		System.out.println();

		for (int i = 0; i < 6; i++) {
			System.out.println(list1.get(i));
		}
		
		
		list1.remove(3);
		list1.remove(3);
		System.out.println();
		
		
		for (int i = 0; i < 4; i++) {
			System.out.println(list1.get(i));
		}
		

		// 从字符流中读取5个字符。
		br.reset();
//		System.out.println(br.ready());
//		
//		for (int i = 0; i < 5; i++) {
//			// 若能继续读取下一个字符，则读取下一个字符
//			if (br.ready()) {
//				// 读取“字符流的下一个字符”
//				int tmp = br.read();
//				System.out.printf("%d : %c\n", i, tmp);
//			}
//		}
		

		// 跳过2个字符。
//		br1.skip(1);
		

		Map<String,String>  map = new LinkedHashMap<String,String>();
		for (int i = 0; i < 6; i++) {
			line = br.readLine();
			map.put(line,line);
			
		}
		System.out.println(map);
		
		//先获取map集合的所有键的set集合，keySet();
        Set<String> k = map.keySet(); //Set<String>相当于返回值类型，此相当于Set集合加上了泛型，类型为String,k相当于变量名
        
        //有了Set集合，就可以获取其迭代器.（注意Set集合的类型要和迭代器保持一致）
        Iterator<String> it = k.iterator();
        
        while(it.hasNext()){
            String key = it.next();
            //有了键，就可以通过map集合的get方法获取对应的值
            String value =map.get(key);
            System.out.println("key:"+key+"---value:"+value);
        }
        
		File file1 = new File("\\\\\\\\Furama\\\\マイ　プロジェクト\\\\新人教育\\\\資料\\\\Java\\\\1.csv");
		FileReader fr1 = new FileReader(file1);
		BufferedReader br1 = new BufferedReader(fr1);
		// 从字符流中读取5个字符。
		for (int i = 0; i < 200; i++) {
			// 若能继续读取下一个字符，则读取下一个字符
			if (br1.ready()) {
				// 读取“字符流的下一个字符”
				int tmp = br1.read();
				System.out.printf("%c", tmp);
			}
		}

		
     


	}
}
