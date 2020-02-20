-- 와일드 카드 => %단어, 단어%. %단어%
-- _원경찰서
-- 한성xxx 찾기
select * from tbl_seoul_bus_up_down
where st_name like '한성%';

select * from tbl_seoul_bus_up_down
where st_name like '%대학%' limit 5;

-- _는 문자개수를 의미한다.
select * from tbl_seoul_bus_up_down
where st_name like '__경찰서' limit 5;

-- 중복제거, 해당 컬럼에 대한 데이터가 1개씩만
select distinct course_no
from tbl_seoul_bus_up_down
where use_yyyymm='201901';
