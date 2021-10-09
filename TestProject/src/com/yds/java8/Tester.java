/**
 * 
 */
package com.yds.java8;

import java.util.ArrayList;
import java.util.List;

/**
 * @author
 *
 */
public class Tester {

	/**
	 * @param args
	 */
	public static void main(String[] args) {

		DbEntity db1 = new DbEntity();
		db1.setKey("key1");
		db1.setShohinServiceCd("code1");
		db1.setCol2("col20");
		db1.setCol3("col30");
		db1.setDelFlg("0");
		
		DbEntity db2 = new DbEntity();
		db2.setKey("key1");
		db2.setShohinServiceCd("code2");
		db2.setCol2("col20");
		db2.setCol3("col30");
		db2.setDelFlg("0");
		
		DbEntity db3 = new DbEntity();
		db3.setKey("key1");
		db3.setShohinServiceCd("code3");
		db3.setCol2("col20");
		db3.setCol3("col30");
		db3.setDelFlg("0");
		
		List<DbEntity> dbList= new ArrayList();
		
		System.out.println("");
	}

	private static List<DbEntity> mergeList(List<DbEntity> dbList, FormEntity form) {

		// TODO
		return dbList;

	}
}
