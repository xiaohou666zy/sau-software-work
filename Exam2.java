package com.yds.exam;

import java.util.ArrayList;
import java.util.List;

/**
 * JAVA培训�?核
 * @author 
 *
 */
public class Exam2 {

	/**
	 * 主方�?
	 * @param args �?入参数
	 */
	public static void main(String[] args) {
		List<Person> list = new ArrayList<Person>();
		list.add(new Person("A1", "A", "A"));
		list.add(new Person("A2", "A", "A"));
		list.add(new Person("A3", "A", "B"));
		list.add(new Person("A4", "B", "B"));
		list.add(new Person("A5", "B", "A"));
		list.add(new Person("A6", "C", "B"));
		list.add(new Person("A7", "C", "A"));
		list.add(new Person("A8", "D", "A"));
		list.add(new Person("A9", "E", "B"));
		list.add(new Person("A10", "A", "B"));
		list.add(new Person("A11", "A", "C"));
		list.add(new Person("A12", "B", "C"));
		list.add(new Person("A13", "B", "C"));

		List<Ret> retList = test(list);

		for (Ret ret : retList) {
			System.out.println(new StringBuffer(ret.getGroup()).append(" A:")
					.append(ret.getCountA()).append(", B:")
					.append(ret.getCountB()).append(", C:")
					.append(ret.getCountC()).append(", D:")
					.append(ret.getCountD()).append(", E:")
					.append(ret.getCountE()));
		}

	}

	// ************ 答题区域�?�? *****************









	// ************ 答题区域结束 *****************
	/**
	 * 按�?��?��班级?��为单位，�?别统计该�?��班级?���?�绩为A/B/C/D/E�?人数?�? 并按�?�A/B/C/D/E�?人数来排�?
	 * 
	 * @param list
	 *            人员�?�表
	 * @return �?�?排序后�?结果
	 */
	private static List<Ret> test(List<Person> list) {
		// ************ 答题区域�?�? *****************






		return null;
		// ************ 答题区域结束 *****************
	}

}

// ************ 答题区域�?�? *****************









// ************ 答题区域结束 *****************
/**
 * 人
 */
class Person {
	/** 姓名 */
	private String name;

	/** 成绩 */
	private String scoreLevel;

	/** �?�?(班级) */
	private String group;

	/**
	 * �?�?�?个人
	 */
	public Person() {
	}

	/**
	 * �?�?�?个人
	 * 
	 * @param name
	 *            姓名
	 * @param scoreLevel
	 *            成绩
	 * @param group
	 *            �?�?(班级)
	 */
	public Person(String name, String scoreLevel, String group) {
		this.name = name;
		this.scoreLevel = scoreLevel;
		this.group = group;
	}

	/**
	 * @return the name
	 */
	public String getName() {
		return name;
	}

	/**
	 * @param name
	 *            the name to set
	 */
	public void setName(String name) {
		this.name = name;
	}

	/**
	 * @return the scoreLevel
	 */
	public String getScoreLevel() {
		return scoreLevel;
	}

	/**
	 * @param scoreLevel
	 *            the scoreLevel to set
	 */
	public void setScoreLevel(String scoreLevel) {
		this.scoreLevel = scoreLevel;
	}

	/**
	 * @return the group
	 */
	public String getGroup() {
		return group;
	}

	/**
	 * @param group
	 *            the group to set
	 */
	public void setGroup(String group) {
		this.group = group;
	}
}

/**
 * 第二题结果Class
 * @author zhaodong
 *
 */
class Ret {
	/** �?�?(班级) */
	private String group;

	/** 成绩为A�?人数 */
	private Integer countA;

	/** 成绩为B�?人数 */
	private Integer countB;

	/** 成绩为C�?人数 */
	private Integer countC;

	/** 成绩为D�?人数 */
	private Integer countD;

	/** 成绩为E�?人数 */
	private Integer countE;

	/**
	 * �?�?结果
	 */
	public Ret() {
		this.countA = 0;
		this.countB = 0;
		this.countC = 0;
		this.countD = 0;
		this.countE = 0;
	}

	/**
	 * @return the group
	 */
	public String getGroup() {
		return group;
	}

	/**
	 * @param group
	 *            the group to set
	 */
	public void setGroup(String group) {
		this.group = group;
	}

	/**
	 * @return the countA
	 */
	public Integer getCountA() {
		return countA;
	}

	/**
	 * @param countA
	 *            the countA to set
	 */
	public void setCountA(Integer countA) {
		this.countA = countA;
	}

	/**
	 * @return the countB
	 */
	public Integer getCountB() {
		return countB;
	}

	/**
	 * @param countB
	 *            the countB to set
	 */
	public void setCountB(Integer countB) {
		this.countB = countB;
	}

	/**
	 * @return the countC
	 */
	public Integer getCountC() {
		return countC;
	}

	/**
	 * @param countC
	 *            the countC to set
	 */
	public void setCountC(Integer countC) {
		this.countC = countC;
	}

	/**
	 * @return the countD
	 */
	public Integer getCountD() {
		return countD;
	}

	/**
	 * @param countD
	 *            the countD to set
	 */
	public void setCountD(Integer countD) {
		this.countD = countD;
	}

	/**
	 * @return the countE
	 */
	public Integer getCountE() {
		return countE;
	}

	/**
	 * @param countE
	 *            the countE to set
	 */
	public void setCountE(Integer countE) {
		this.countE = countE;
	}

}