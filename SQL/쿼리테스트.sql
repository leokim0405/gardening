-- 데이터들은 테이블 안에 들어가 있다.
-- 1개의 테이블에서 전체 데이터, 모든 컬럼을  그냥 다 보자.
-- * : 모든 컬럼
-- SELECT * FROM tbl_seoul_bus_addr;
-- SELECT * FROM tbl_seoul_bus_up_down;
-- 위의 표현은 시스템에 부하가 걸리기 때문에 자제

-- 1. 데이터의 전체 크기를 보자 (데이터의 개수)
-- 2. 컬럼을 카운트 하여 그 데이터가 몇 개인지 확인
-- SELECT COUNT(*) FROM tbl_seoul_bus_addr;
-- SELECT COUNT(id) FROM tbl_seoul_bus_addr;
-- SELECT COUNT(id) FROM tbl_seoul_bus_up_down;
-- 3. 결과물로 나오는 컬럼명이 적절치 않다
-- 이름을 부여해줬으면 좋겠다. -> 별칭부여(ALIAS)
-- SELECT COUNT(id) AS cnt FROM tbl_seoul_bus_addr;

-- 4. 상위 데이터를 좀 보자
-- 최상위 1개만
-- select * from tbl_seoul_bus_up_down limit 1;
-- 맨 마지막 데이터 1개만 가져와-> + 내림차순 정렬
select * from tbl_seoul_bus_up_down
order by id desc
limit 1;
-- 마지막 데이터 5개만 보자
select * from tbl_seoul_bus_up_down
order by id desc
limit 5;
-- 처음 데이터에서 5번째부터, 6개 확인
-- (한번에 보여지는 데이터 개수) * (페이지 번호 - 1)
-- 0, 5, 10, 15, 20, ...
select * from tbl_seoul_bus_up_down
limit 0, 5;
select * from tbl_seoul_bus_up_down
limit 5, 5;
select * from tbl_seoul_bus_up_down
limit 10, 5;


