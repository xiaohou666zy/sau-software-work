package com.yds.java8;

import java.util.List;

/**
 * 画面的Entity
 * @author zhaodong
 *
 */
public class FormEntity {
	
	/** DB 主键 */
	private String key;
	
	/** 商品code */
	private List<ShohinServiceEntity> shohinService;
	
	/** 列2 */
	private String col2;
	
	/** 列3 */
	private String col3;
	
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
	 * @return the shohinService
	 */
	public List<ShohinServiceEntity> getShohinService() {
		return shohinService;
	}
	/**
	 * @param shohinService the shohinService to set
	 */
	public void setShohinService(List<ShohinServiceEntity> shohinService) {
		this.shohinService = shohinService;
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

}
