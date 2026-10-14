import { useState } from 'react';
import Container from 'react-bootstrap/Container';
import Row from 'react-bootstrap/Row';
import Col from 'react-bootstrap/Col';
import Image from 'react-bootstrap/Image';
import Pagination from 'react-bootstrap/Pagination';

const allWorksData = [
  // Halaman 1
  {
    id: 1,
    link: '#works',
    image: require('../assets/images/img2.jpg'),
    title: 'Enterprise Analytics Dashboard',
    subtitle: 'Web Application'
  },
  {
    id: 2,
    link: '#works',
    image: require('../assets/images/img3.jpg'),
    title: 'Mobile Delivery Tracker',
    subtitle: 'Flutter / Mobile App'
  },
  {
    id: 3,
    link: '#works',
    image: require('../assets/images/img4.jpg'),
    title: 'High-Performance VPS Cluster',
    subtitle: 'Server & Cloud Setup'
  },
  {
    id: 4,
    link: '#works',
    image: require('../assets/images/img5.jpg'),
    title: 'E-Commerce Marketplace',
    subtitle: 'Full-Stack Web'
  },
  {
    id: 5,
    link: '#works',
    image: require('../assets/images/img6.jpg'),
    title: 'Corporate Portal Redesign',
    subtitle: 'UI/UX & Frontend'
  },
  {
    id: 6,
    link: '#works',
    image: require('../assets/images/img7.jpg'),
    title: 'Smart IoT Gateway',
    subtitle: 'Hardware & Dashboard'
  },

  // Halaman 2
  {
    id: 7,
    link: '#works',
    image: require('../assets/images/img8.jpg'),
    title: 'Fintech Payment Gateway',
    subtitle: 'API Integration'
  },
  {
    id: 8,
    link: '#works',
    image: require('../assets/images/img9.jpg'),
    title: 'School Management Portal',
    subtitle: 'Web System'
  },
  {
    id: 9,
    link: '#works',
    image: require('../assets/images/img2.jpg'),
    title: 'Collaborative Workspace App',
    subtitle: 'Realtime Web'
  },
  {
    id: 10,
    link: '#works',
    image: require('../assets/images/img3.jpg'),
    title: 'Automated CRM Dashboard',
    subtitle: 'Business Software'
  },
  {
    id: 11,
    link: '#works',
    image: require('../assets/images/img4.jpg'),
    title: 'Fleet Logistics Mobile',
    subtitle: 'Flutter App'
  },
  {
    id: 12,
    link: '#works',
    image: require('../assets/images/img5.jpg'),
    title: 'Microservices Deployment',
    subtitle: 'DevOps & Docker'
  }
];

function AppWorks() {
  const [currentPage, setCurrentPage] = useState(1);
  const itemsPerPage = 6;

  const totalPages = Math.ceil(allWorksData.length / itemsPerPage);

  const indexOfLastItem = currentPage * itemsPerPage;
  const indexOfFirstItem = indexOfLastItem - itemsPerPage;
  const currentWorks = allWorksData.slice(indexOfFirstItem, indexOfLastItem);

  const handlePageChange = (pageNumber) => {
    setCurrentPage(pageNumber);
  };

  return (
    <section id="works" className="block works-block">
      <Container fluid>
        <div className="title-holder">
          <h2>Our Works</h2>
          <div className="subtitle">portofolio solusi teknologi yang telah kami rancang &amp; bangun</div>
        </div>

        <Row className="portfoliolist">
          {currentWorks.map((work) => (
            <Col sm={4} key={work.id}>
              <div className="portfolio-wrapper">
                <a href={work.link}>
                  <div style={{ width: '100%', height: '240px', overflow: 'hidden' }}>
                    <Image
                      src={work.image}
                      alt={work.title}
                      fluid
                      style={{
                        width: '100%',
                        height: '100%',
                        objectFit: 'cover'
                      }}
                    />
                  </div>
                  <div className="label text-center">
                    <h3>{work.title}</h3>
                    <p>{work.subtitle}</p>
                  </div>
                </a>
              </div>
            </Col>
          ))}
        </Row>

        <div className="d-flex justify-content-center mt-4">
          <Pagination>
            <Pagination.Prev
              onClick={() => handlePageChange(Math.max(currentPage - 1, 1))}
              disabled={currentPage === 1}
            />
            {Array.from({ length: totalPages }, (_, index) => {
              const pageNumber = index + 1;
              return (
                <Pagination.Item
                  key={pageNumber}
                  active={pageNumber === currentPage}
                  onClick={() => handlePageChange(pageNumber)}
                >
                  {pageNumber}
                </Pagination.Item>
              );
            })}
            <Pagination.Next
              onClick={() => handlePageChange(Math.min(currentPage + 1, totalPages))}
              disabled={currentPage === totalPages}
            />
          </Pagination>
        </div>
      </Container>
    </section>
  );
}

export default AppWorks;