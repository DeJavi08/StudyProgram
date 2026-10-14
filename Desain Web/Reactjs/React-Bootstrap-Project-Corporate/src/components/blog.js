import Container from 'react-bootstrap/Container';
import Row from 'react-bootstrap/Row';
import Col from 'react-bootstrap/Col';
import Card from 'react-bootstrap/Card';

const blogData = [
  {
    id: 1,
    image: 'https://course-net.com/wp-content/uploads/2022/10/RwbLRVfdwEWPSXIowg8UG6mmHADzpUBjfjzMPgti.png',
    time: '12 Feb 2024',
    title: 'Membangun UI yang Bersih & Responsif',
    description: 'Panduan praktis menyusun layout web modern agar performa tetap kencang dan nyaman dilihat di berbagai ukuran layar perangkat.',
    link: '#blog-1'
  },
  {
    id: 2,
    image: 'https://onlyflutter.com/wp-content/uploads/2024/03/flutter_banner_onlyflutter-1024x576.png',
    time: '28 Jan 2024',
    title: 'Keunggulan Flutter untuk Aplikasi Mobile',
    description: 'Kenapa memilih Flutter untuk proyek lintas platform: efisiensi waktu rilis, performa mendekati native, dan kemudahan skalabilitas kode.',
    link: '#blog-2'
  },
  {
    id: 3,
    image: 'https://www.leyun.asia/wp-content/uploads/2025/01/DALL%C2%B7E-2025-01-15-11.56.09-An-informative-and-visually-engaging-illustration-for-an-article-about-Cloud-VPS-showcasing-the-benefits-and-tips-for-choosing-the-best-VPS.-The-scen.webp',
    time: '15 Jan 2024',
    title: 'Tips Optimasi Server & VPS untuk Startup',
    description: 'Langkah awal mengelola VPS, mulai dari konfigurasi dasar keamanan firewall hingga trik caching agar website siap menangani lonjakan traffic.',
    link: '#blog-3'
  }
];

function AppBlog() {
  return (
    <section id="blog" className="block blog-block">
      <Container fluid>
        <div className="title-holder">
          <h2>Latest from blog</h2>
          <div className="subtitle">update insight teknologi & pengembangan digital dari kami</div>
        </div>
        <Row>
          {
            blogData.map(blog => {
              return (
                <Col sm={4} key={blog.id}>
                  <div className='holder'>
                    <Card>
                      <Card.Img variant="top" src={blog.image} />
                      <Card.Body>
                        <time>{blog.time}</time>
                        <Card.Title>{blog.title}</Card.Title>
                        <Card.Text>
                          {blog.description}
                        </Card.Text>
                        <a href={blog.link} className="btn btn-primary">
                          Read More <i className="fas fa-chevron-right"></i>
                        </a>
                      </Card.Body>
                    </Card>
                  </div>
                </Col>
              );
            })
          }
        </Row>
      </Container>
    </section>
  );
}

export default AppBlog;