-- 년월을 그룹으로 잡고 (1 ~ 12월 까지 기준)
-- group by
select count(*) as '역수'
from tbl_seoul_bus_up_down
where tbl_seoul_bus_up_down.course_no = '100'
group by tbl_seoul_bus_up_down.use_yyyymm;

select count(*) as '역수', use_yyyymm
from tbl_seoul_bus_up_down
where tbl_seoul_bus_up_down.course_no = '100'
group by tbl_seoul_bus_up_down.use_yyyymm;

-- 그룹by를 했떠니 뭔가 수치가 이상하다
select
	count(*) as '역수', use_yyyymm,
	pa_down_12 as '12시에 하차 총원',
	pa_up_12 as '12시에 승차 총원'
from tbl_seoul_bus_up_down
where tbl_seoul_bus_up_down.course_no = '100'
group by tbl_seoul_bus_up_down.use_yyyymm;

-- 합산기능(함수)를 넣어서 해결
select
	count(*) as '역수', use_yyyymm,
	sum(pa_down_12) as '12시에 하차 총원',
	sum(pa_up_12) as '12시에 승차 총원'
from tbl_seoul_bus_up_down
where tbl_seoul_bus_up_down.course_no = '100'
group by tbl_seoul_bus_up_down.use_yyyymm;

select
	count(*) as '역수', use_yyyymm,
	avg(pa_down_12) as '12시에 하차 총원 월별 평균치',
	avg(pa_up_12) as '12시에 승차 총원 월별 평균치'
from tbl_seoul_bus_up_down
where tbl_seoul_bus_up_down.course_no = '100'
group by tbl_seoul_bus_up_down.use_yyyymm;

-- 버스번호, 100, 101, 102 가져와
-- 2월 것만
select * from tbl_seoul_bus_up_down
where use_yyyymm = '201902' and
		course_no in ('100','101','102');
		
-- 와일드 카드 => %단어, 단어%. %단어%
-- _원경찰서
-- 한성xxx 찾기
select * from tbl_seoul_bus_up_down
where st_name like '한성%';

select * from tbl_seoul_bus_up_down
where st_name like '%대학%';