public class Tester {
	/**
	 * @param args
	 */
	public static void main(String[] args) {

		List<DbEntity> dbList= new ArrayList<DbEntity>();
		
		DbEntity db1 = new DbEntity();
		db1.setKey("key1");
		db1.setShohinServiceCd("code1");
		db1.setCol2("col20");
		db1.setCol3("col30");
		db1.setDelFlg("0");
		dbList.add(db1);
		
		DbEntity db2 = new DbEntity();
		db2.setKey("key1");
		db2.setShohinServiceCd("code2");
		db2.setCol2("col20");
		db2.setCol3("col30");
		db2.setDelFlg("0");
		dbList.add(db2);
		
		DbEntity db3 = new DbEntity();
		db3.setKey("key1");
		db3.setShohinServiceCd("code3");
		db3.setCol2("col20");
		db3.setCol3("col30");
		db3.setDelFlg("1");
		dbList.add(db3);
		
		DbEntity db4 = new DbEntity();
		db4.setKey("key1");
		db4.setShohinServiceCd("code4");
		db4.setCol2("col20");
		db4.setCol3("col30");
		db4.setDelFlg("0");
		dbList.add(db4);
		
		DbEntity db5 = new DbEntity();
		db5.setKey("key1");
		db5.setShohinServiceCd("code5");
		db5.setCol2("col20");
		db5.setCol3("col30");
		db5.setDelFlg("1");
		dbList.add(db5);
		
		DbEntity db6 = new DbEntity();
		db6.setKey("key2");
		db6.setShohinServiceCd("code1");
		db6.setCol2("col21");
		db6.setCol3("col31");
		db6.setDelFlg("0");
		dbList.add(db6);
		
		FormEntity form = new FormEntity();
		form.setKey("key1");
		form.setCol2("col22");
		form.setCol3("col32");
		List<ShohinServiceEntity> shohinServiceList = new ArrayList<ShohinServiceEntity>();
		ShohinServiceEntity entity1 = new ShohinServiceEntity();
		entity1.setShohinServiceCd("code1");
		entity1.setShohinServiceName("name1");
		
		ShohinServiceEntity entity4 = new ShohinServiceEntity();
		entity4.setShohinServiceCd("code4");
		entity4.setShohinServiceName("name4");
		
		ShohinServiceEntity entity5 = new ShohinServiceEntity();
		entity5.setShohinServiceCd("code5");
		entity5.setShohinServiceName("name5");
		
		ShohinServiceEntity entity6 = new ShohinServiceEntity();
		entity6.setShohinServiceCd("code6");
		entity6.setShohinServiceName("name6");
		
		shohinServiceList.add(entity1);
		shohinServiceList.add(entity4);
		shohinServiceList.add(entity5);
		shohinServiceList.add(entity6);
		
		form.setShohinService(shohinServiceList);
		
		List<DbEntity> newDb = mergeList(dbList, form);
		
		for(DbEntity dbEntity : newDb){
			System.out.print(dbEntity.getKey()+" ");
			System.out.print(dbEntity.getShohinServiceCd()+" ");
			System.out.print(dbEntity.getCol2()+" ");
			System.out.print(dbEntity.getCol3()+" ");
			System.out.println(dbEntity.getDelFlg()+" ");
		}
	}

	private static List<DbEntity> mergeList(List<DbEntity> dbList, FormEntity form) {
		boolean IfDbisInForm = false;//判断db中的数据是否在form内
		for (DbEntity dbItem : dbList) {
			IfDbisInForm=false;//flag在每次进循环时都要置为false
			//判断key是否相等，若相等才进行处理
			if(dbItem.getKey()==form.getKey()) {
				for (ShohinServiceEntity formItem : form.getShohinService()) {
					//判断db中商品code是否在form中存在，若存在则flag置为0且col2col3进行赋值，若不在则将flag置为1
					if(dbItem.getShohinServiceCd().equals(formItem.getShohinServiceCd()) ) {
						dbItem.setDelFlg("0");
						dbItem.setCol2(form.getCol2());
						dbItem.setCol3(form.getCol3());
						IfDbisInForm=true;
					}
				}
				if(!IfDbisInForm) {
					dbItem.setDelFlg("1");
				}
			}
		}
		
		//将form中存在的数据且db中没有的数据加入到db中
		boolean IfFormisInDb = false;//判断form中的数据是否在db内
		for (ShohinServiceEntity formItem : form.getShohinService()) {
			IfFormisInDb = false;//flag在每次进循环时都要置为false
			for (DbEntity dbItem : dbList) {
				if(formItem.getShohinServiceCd().equals(dbItem.getShohinServiceCd())) {
					IfFormisInDb = true;
				}
			}
			if(!IfFormisInDb) {
				DbEntity tempDb = new DbEntity();
				tempDb.setKey(form.getKey());
				tempDb.setShohinServiceCd(formItem.getShohinServiceCd());
				tempDb.setCol2(form.getCol2());
				tempDb.setCol3(form.getCol3());
				tempDb.setKey("0");
			}
		}
		return dbList;

	}
}