-- 12시에 탑승자, 하차 인원이 가장 많았던 정거장?
-- 특정 버스번호 6635
-- 201901에
select 
	max(pa_down_12), max(pa_up_12)
from
	tbl_seoul_bus_up_down
where
	course_no = '6635' and use_yyyymm = '201901';
	
-- union, union all
-- 월별로 12시 승차, 하차 인원 평균을 보고싶다
-- 버스는 6635
-- group by 하지 않고 처리
-- union은 중복 제거 기능이 있음
-- union all 은 무조건 다합쳐
-- 컬럼 목록이 동일해야 한다.
-- 만약 컬럼명이 다르면 별칭으로 통일한다.
-- 최소한 컬럼의 수는 같아야 한다.
select avg(pa_down_12), use_yyyymm
from tbl_seoul_bus_up_down
where use_yyyymm = '201901' and course_no = '6635'

union all

select avg(pa_down_12), use_yyyymm
from tbl_seoul_bus_up_down
where use_yyyymm = '201902' and course_no = '6635'

union all

select avg(pa_down_12), use_yyyymm
from tbl_seoul_bus_up_down
where use_yyyymm = '201903' and course_no = '6635';

-- 조인
/*
select * from
from tbl_seoul_bus_up_down
inner join tbl_seoul_bus_addr
on tbl_seoul_bus_up_down.bus_st_ARS_no =tbl_seoul_bus_addr.ARSID
*/

select * from
from tbl_seoul_bus_up_down as s
inner join tbl_seoul_bus_addr as t
on s.bus_st_ARS_no = t.ARSID
where s.use_yyyymm = '201901' and s.course_no = '6635';



-- 서브쿼리