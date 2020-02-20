-- 5. 특정 컬럼 항목만 가져오자.
-- 필요한 컬럼은 나열한다. , 구분자
/*select
	course_no, st_name
from
	tbl_seoul_bus_up_down
limit
	20;
*/
-- 별칭 -> 컬럼명 as 별칭, 테이블명 as 별칭
-- 테이블명의 별칭은 여러 테이블을 가지고 조회할 때 유용
select
	course_no as '버스번호', st_name as '정거장 명'
from
	tbl_seoul_bus_up_down
limit
	20;

-- 6. 버스번호 100번의 정거장명을 가져와라
select st_name as '정거장명'
from tbl_seoul_bus_up_down
where course_no = '100';
-- 위의 결과물에서 2019년 1월 데이터만 봅시다.
-- 2019년 1월이고, 버스번호 100인 데이터
-- 조건이 동시성을 가지므로, AND
-- 이거거나 저거 or
-- 이것만 뻬고 not
select st_name as '정거장명', use_yyyymm
from tbl_seoul_bus_up_down
where course_no = '100' and use_yyyymm = '201901';