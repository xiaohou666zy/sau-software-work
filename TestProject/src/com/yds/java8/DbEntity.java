package com.yds.java8;

/**
 * DB 的Entity
 * @author 
 *
 */
public class DbEntity {
	
	/** DB 主键1 */
	private String key;
	
	/** 商品code */
	private String shohinServiceCd;
	
	/** 列2 */
	private String col2;
	
	/** 列3 */
	private String col3;
	
	/** 删除Flag */
	private String delFlg;
	
	/**
	 * @return the key
	 */
	public String getKey() {
		return key;
	}
	/**
	 * @param key the key to set
	 */
	public void setKey(String key) {
		this.key = key;
	}
	/**
	 * @return the shohinServiceCd
	 */
	public String getShohinServiceCd() {
		return shohinServiceCd;
	}
	/**
	 * @param shohinServiceCd the shohinServiceCd to set
	 */
	public void setShohinServiceCd(String shohinServiceCd) {
		this.shohinServiceCd = shohinServiceCd;
	}
	/**
	 * @return the col2
	 */
	public String getCol2() {
		return col2;
	}
	/**
	 * @param col2 the col2 to set
	 */
	public void setCol2(String col2) {
		this.col2 = col2;
	}
	/**
	 * @return the col3
	 */
	public String getCol3() {
		return col3;
	}
	/**
	 * @param col3 the col3 to set
	 */
	public void setCol3(String col3) {
		this.col3 = col3;
	}
	/**
	 * @return the delFlg
	 */
	public String getDelFlg() {
		return delFlg;
	}
	/**
	 * @param delFlg the delFlg to set
	 */
	public void setDelFlg(String delFlg) {
		this.delFlg = delFlg;
	}
	

}
